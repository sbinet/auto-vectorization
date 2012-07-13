package main

func main() {
	const N = 10000000
	a := [N]float32{}
	b := [N]float32{}
	c := [N]float32{}
	
	for j := 0; j < 200; j++ {
		for i := 0; i < N; i++ {
			c[i] = a[i] * b[i]
		}
	}
}