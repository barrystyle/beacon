for file in $(grep -ir "The PIVX Core developers" src/*{.cpp,.h}); do
    echo $file
#    sed -e 's/\bBILL\b/BILLING/g' $file > tmp
#    mv tmp $file
done
