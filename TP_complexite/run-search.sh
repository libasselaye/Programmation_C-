#!/bin/sh

echo "*** search (naive) ***"
./search.out 200 2000 200 naive 0 1000000 | tee cpp-tp-complexite-search-naive.csv 

echo "*** search (optim) ***"
./search.out 200 2000 200 optim 0 1000000 | tee cpp-tp-complexite-search-optim.csv 

paste cpp-tp-complexite-search-naive.csv cpp-tp-complexite-search-optim.csv > cpp-tp-complexite-search.csv 

IMG_EXT="png"

PLOT_PARAMS=" \
    set terminal ${IMG_EXT} size 640,480 ; \
    set key left top ; \
    set xtics rotate by -45 ; \
    set grid xtics ytics; \
    set rmargin at screen 0.9 ; " 

echo "*** plot (naive) ***"

gnuplot -e "set out \"cpp-tp-complexite-search-naive.${IMG_EXT}\" ; \
    ${PLOT_PARAMS} \
    plot 'cpp-tp-complexite-search.csv' using 1:2 with line lc rgb 'red' lw 2 title 'naive'  "

echo "*** plot (optim) ***"

gnuplot -e "set out \"cpp-tp-complexite-search-optim.${IMG_EXT}\" ; \
    ${PLOT_PARAMS} \
    plot 'cpp-tp-complexite-search.csv' using 4:5 with line lc rgb 'blue' lw 2 title 'optim'"

echo "*** plot ***"

gnuplot -e "set out \"cpp-tp-complexite-search.${IMG_EXT}\" ; \
    ${PLOT_PARAMS} \
    plot 'cpp-tp-complexite-search.csv' using 1:2 with line lc rgb 'red' lw 2 title 'naive', \
         'cpp-tp-complexite-search.csv' using 4:5 with line lc rgb 'blue' lw 2 title 'optim'"

