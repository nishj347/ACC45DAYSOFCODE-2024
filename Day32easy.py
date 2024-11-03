# Read the number of rounds
N = int(input().strip())

# Initialize scores
score1 = 0
score2 = 0

# Variables to track the maximum lead and the winner
max_lead = 0
winner = 0

# Process each round
for _ in range(N):
    S, T = map(int, input().strip().split())
    
    # Update cumulative scores
    score1 += S
    score2 += T
    
    # Determine the current leader and the lead
    if score1 > score2:
        lead = score1 - score2
        current_winner = 1
    else:
        lead = score2 - score1
        current_winner = 2
    
    # Update maximum lead and winner if necessary
    if lead > max_lead:
        max_lead = lead
        winner = current_winner

# Output the winner and the maximum lead
print(winner, max_lead)
