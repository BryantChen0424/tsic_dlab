for dir in ./*/*/; do
  [ -d "$dir" ] || continue
  subdir_name=$(basename "$dir")
  design_name=${subdir_name#*_}
  sed "s/{{design_name}}/$design_name/g" template_Makefile > "${dir}Makefile"
done
