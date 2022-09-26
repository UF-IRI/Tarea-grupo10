# !/bin/bash
filename="CMakeLists.txt"
searchString="Project_Name"

# Nombre del Proyecto
read -p "Ingrese el nombre del proyecto >> " projectName

if [[ $searchString != "" && $projectName != "" ]]; then
    sed -i "s/$searchString/$projectName/" $filename
fi