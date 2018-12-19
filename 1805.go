package main

import "fmt"

func main() {
	var a, b, res uint64

	fmt.Scanf("%d %d", &a, &b)
	res = (a+b) * (b-a+1) / 2
	fmt.Printf("%d\n", res)
}
