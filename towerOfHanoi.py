def towers_of_hanoi(n, from_peg, to_peg, aux_peg):
    if n == 1:
        print(f"Move disk 1 from peg {from_peg} to peg {to_peg}")
        return
    towers_of_hanoi(n - 1, from_peg, aux_peg, to_peg)
    print(f"Move disk {n} from peg {from_peg} to peg {to_peg}")
    towers_of_hanoi(n - 1, aux_peg, to_peg, from_peg)

# Example usage
towers_of_hanoi(3, 'A', 'C', 'B')
