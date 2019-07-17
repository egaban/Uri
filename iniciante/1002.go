package main

import "fmt"

func main() {
	const PI = 3.14159
	var raio float64

	fmt.Scanf("%f", &raio)
	fmt.Printf("A=%.4f\n", PI*raio*raio)
}
