cat /etc/passwd | sed "/#/d" | sed -n '2,${p;n;}' | cut -d ":" -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | xargs | sed "s/ /, /g " | tr "\n" "."
