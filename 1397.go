package main

import "fmt"

func main() {
	var n, a, b int
	var pa, pb int

	fmt.Scanf("%d", &n)
	for n != 0 {
		pa = 0
		pb = 0
		for i := 0; i < n; i++ {
			fmt.Scanf("%d %d", &a, &b)
			if a > b {
				pa++
			} else if b > a {
				pb++
			}
		}
		fmt.Printf("%d %d\n", pa, pb)
		fmt.Scanf("%d", &n)
	}
}
