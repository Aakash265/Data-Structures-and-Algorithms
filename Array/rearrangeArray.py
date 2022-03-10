def Rearrange(arr, n):
    for i in range(n):
        if (arr[i] != i and arr[i] != -1):
            temp = arr[i]
            while (arr[temp] != temp and arr[temp] != -1):
                val = arr[temp]
                arr[temp] = temp
                temp = val

            arr[temp] = temp

            if (arr[i] != i):
                arr[i] = -1
    return arr

n = int(input())
arr = []

for i in range(n):
    ele = int(input())
    arr.append(ele)
ans = Rearrange(arr, n)
print(*ans)