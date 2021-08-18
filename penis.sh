for f in *.c
do
    y=${x%.c}
    x=${y##*/}
    gcc $f -o $x
done
