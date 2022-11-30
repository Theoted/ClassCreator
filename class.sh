#!/bin/bash

name=$1
upper=$(echo "$name" | tr '[:lower:]' '[:upper:]')

cp ~/ClassCreator/*.cpp ~/ClassCreator/*.hpp ./

mv ./Sample.cpp "${name}.cpp"
mv ./Sample.hpp "${name}.hpp"

sed -i '' "s/Sample/${name}/g" "${name}.cpp"
sed -i '' "s/Sample/${name}/g" "${name}.hpp"
sed -i '' "s/SAMPLE/${upper}/g" "${name}.hpp"
