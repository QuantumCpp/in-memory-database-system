# File-Manager : Gestor de Archivos Inteligente
OBJETIVO: Dominar I/O de archivos, filesystem, y procesamiento básico de datos
QUÉ construir:
Un programa CLI que gestiona archivos en un directorio con operaciones avanzadas.
Funcionalidades:

Listar archivos con filtros (extensión, tamaño, fecha)
Buscar archivos por contenido o nombre (con patrones)
Copiar/mover/renombrar en batch
Calcular checksums (MD5/SHA256) para detectar duplicados
Organizar archivos automáticamente por tipo/fecha
Comparar dos directorios y sincronizar
Generar reportes (archivos más grandes, más viejos, etc.)

Librerías C++ que usarás:

<filesystem> - navegación de directorios, metadata de archivos
<fstream> - lectura/escritura de archivos
<string>, <string_view> - manipulación de paths y nombres
<algorithm> - sort, filter, find
<vector>, <map> - almacenar info de archivos
<regex> - patrones de búsqueda

Conceptos que dominarás:

File I/O binario y texto
Recursión de directorios
Manejo de paths multiplataforma
Algoritmos de búsqueda y filtrado
Hashing para comparación

Cómo verificar éxito:

Procesa 10,000 archivos en <5 segundos
Encuentra duplicados correctamente (compara checksums)
Sincronización detecta diferencias precisamente
No crashea con archivos corruptos o permisos denegados

Nivel de dificultad: ⭐⭐☆☆☆
