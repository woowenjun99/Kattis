void exclusive(bool x, bool y, bool& ans){
    int a = x ? 1 : 0;
    int b = y ? 1 : 0;
    ans = (a ^ b == 1) ? true : false;
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    ans = not (x and not y);
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    ans = x == y;
}