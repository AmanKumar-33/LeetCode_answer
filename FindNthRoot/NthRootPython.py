m = 9
n = 2

def nthRoot(self, n: int, m: int) -> int:
        low = 1
        high = m
        # guess_num =  0
        
        while(low <= high ):
            guess = (high + low)//2
            # guess_num += 1
            if(guess**n == m):
                return guess
            elif(guess**n > m):
                high = guess
            else:
                low = guess

print(nthRoot(0, n, m))
