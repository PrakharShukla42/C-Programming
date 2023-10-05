coins = list(map(int, input().split()))
time = {}
for coin in coins:
    if coin in time:
        time[coin] += 1
    else:
        time[coin] = 1
min_pockets = max(time.values())
print(min_pockets)
