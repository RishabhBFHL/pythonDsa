function towersOfHanoi(n, fromPeg, toPeg, auxPeg) {
    if (n === 1) {
        console.log(`Move disk 1 from peg ${fromPeg} to peg ${toPeg}`);
        return;
    }
    towersOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    console.log(`Move disk ${n} from peg ${fromPeg} to peg ${toPeg}`);
    towersOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

// Example usage
towersOfHanoi(3, 'main', 'destiny', 'aux');
