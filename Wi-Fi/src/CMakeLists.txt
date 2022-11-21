# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

set(app_sources
    "controllerMain.c"
    EMBED_FILES "root.html"
)

idf_component_register(SRCS ${app_sources})
