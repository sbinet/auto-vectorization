all: vec-avec vec-nvec go-nvec go-avec tests

CXX:=g++
GOC:=go build

vec-nvec: vec.cxx
	$(CXX) -o vec-nvec $< -fno-tree-vectorize -O2 -std=c++11 -g

vec-avec: vec.cxx
	$(CXX) -o vec-avec $< -ftree-vectorize -O2 -march=native -std=c++11 -g

go-nvec: vec.go
	$(GOC) -o go-nvec $< 

go-avec: vec.go
	$(GOC) -compiler=gccgo -gccgoflags "-ftree-vectorize -O2 -march=native" \
	  -o go-avec $<

tests: vec-nvec vec-avec go-avec go-nvec
	time ./vec-nvec
	time ./vec-avec
	time ./go-nvec
	time ./go-avec

clean:
	/bin/rm -f vec-nvec
	/bin/rm -f vec-avec
	/bin/rm -f go-nvec
	/bin/rm -f go-avec
	/bin/rm -f *.o
