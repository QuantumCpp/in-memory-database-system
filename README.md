# File‑Manager — Intelligent File Manager

> **A pragmatic CLI for mastering file I/O, filesystem tooling and robust batch operations.**

---

## ✨ Overview

File‑Manager is a focused command‑line utility written in C++ that brings together practical filesystem work (traversal, metadata, I/O) with production‑grade patterns: clear phases, deterministic behavior, and defensive failure modes. This repo is both a learning vehicle and a tool you can use daily.

## 🎯 Goals

* Achieve confidence with file I/O (binary and text), directory recursion and metadata.
* Build a small but solid command ecosystem for advanced file tasks.
* Prioritize correctness, reproducibility, and predictable performance.

## 🔧 What it does

A compact feature list that prioritizes usefulness and clarity:

* **List files** with flexible filters (extension, size, dates).
* **Search** by name or by content (pattern / text scan).
* **Batch operations:** copy, move, rename with filters and dry‑run mode.
* **Duplicate detection** using checksums (MD5 / SHA‑256) and fast prefilters (size, partial hash).
* **Auto‑organize** files into structured folders (by type, date, or custom rules).
* **Dir compare & sync**: detect missing/changed files and produce sync plans.
* **Reports**: largest files, oldest files, summary statistics.

## 🧭 Core concepts practiced

* Binary and text file I/O
* Recursive directory traversal and robust error handling
* Cross‑platform path handling via `std::filesystem`
* Efficient filtering and sorting of large file sets
* Hashing for reliable duplicate detection

## 🧱 Architecture (high level)

The CLI is designed in clear, testable stages:

1. **Tokenization** — lexical classification of the command line.
2. **Canonicalization** — alias resolution (planned), normalization of token identity.
3. **Validation** — semantic checks, policy enforcement, normalization of duplicates.
4. **Execution** — perform filesystem operations using safe, retryable primitives.

Keeping each stage focused makes the system easier to extend and reason about.

## ⚙️ Tech stack & libraries

Minimal dependencies; mostly standard C++:

* `std::filesystem` — traversal, metadata, path ops
* `std::fstream` / low‑level I/O — reading/writing files
* STL containers & algorithms — `vector`, `unordered_map`, `sort`, `find`
* Hash routines (MD5/SHA‑256): either lightweight internal implementation or a tiny, audited header

No heavy external frameworks — the point is to master fundamentals.

## ✅ Success criteria

A pragmatic set of acceptance tests:

* Process **10,000 files** within target time (benchmark target configurable).
* Correctly identify duplicates via checksums, with prefiltering for speed.
* Directory synchronization produces an accurate plan and can apply it safely.
* Robustness under read errors, permission failures and malformed files.

## 🔮 Roadmap & Pending Items

These items are intentionally postponed or marked as next steps. They are ordered by priority.

**CLI & Parsing**

* [ ] Canonicalization: alias table (`-e` ↔ `--extension`) and Option canonical names.
* [ ] Prefer the option token that contains a value when duplicates exist (value wins).
* [ ] Support `ValuePolicy::Optional` semantics and clearer diagnostics.

**Validation & UX**

* [ ] Improve error messages (include token index, offending string).
* [ ] Add strict vs permissive validation modes.
* [ ] Provide detailed dry‑run output for destructive commands.

**Execution & Performance**

* [ ] Add a robust `FileWorker` abstraction to handle retries / concurrency.
* [ ] Implement partial hashing to accelerate duplicate detection (size → partial hash → full hash).
* [ ] Add benchmarks and CI profiling to guard performance targets.

**Advanced**

* [ ] Add rule engine for automatic organization (user‑configurable rules).
* [ ] Add plugin/handler model for custom commands.

## 🧩 Design principles

* **Explicit > implicit.** No magic: behavior must be discoverable.
* **Fail safe.** Operations default to non‑destructive (dry‑run first).
* **Composable.** Small building blocks (tokenization, validation, executor).
* **Minimal external deps.** Rely on std C++ and audited small libraries.

## 📝 Usage (draft)

```
# list by extension, recursive
file-manager list --extension=jpg --recursive

# find duplicates and generate a report
file-manager find-duplicates --hash=sha256 --output=dupes.csv

# dry-run move by year
file-manager organize --by=year --dry-run
```

## 📜 License

See the `LICENSE` file in the repository root.

---

*If you want, I can also:*

* add a short `ARCHITECTURE.md` (token flow diagram + module map), or
* produce a concrete `alias table` stub and show how Canonicalization integrates with `Validation`.

Which of those should I do next?
