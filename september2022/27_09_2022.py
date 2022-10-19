// https://my.newtonschool.co/playground/code/et7uqhr74m6h/

import numpy as np
from scipy.sparse import csr_matrix

n,m=input().strip().split()
n=int(n)
m=int(m)
arr =np.array([input().strip().split() for _ in range(n)],int) 

print(csr_matrix(arr).count_nonzero())