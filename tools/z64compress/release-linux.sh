# build compression functions (slow)
gcc -DNDEBUG -s -Ofast -flto -lm -c -Wall src/enc/*.c src/enc/lzo/*.c src/enc/ucl/comp/*.c src/enc/apultra/*.c
mkdir -p o
mv *.o o

# build everything else
gcc -o z64compress -DNDEBUG src/*.c o/*.o -Wall -Wextra -s -Os -flto -lpthread

# move to bin directory
mkdir -p bin/linux64
mv z64compress bin/linux64



