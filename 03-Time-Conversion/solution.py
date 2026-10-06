"""
Problem 3: Time Conversion
Platform: HackerRank
Topic: Strings & Logic
Time Complexity: O(1)
Space Complexity: O(1)
"""

def timeConversion(s):
    """
    Converts 12-hour AM/PM string to 24-hour military time string.
    Input format: hh:mm:ssAM or hh:mm:ssPM
    """
    period = s[-2:]
    hour = int(s[:2])
    rest = s[2:-2]

    if period == "AM":
        if hour == 12:
            hour = 0
    else:  # PM
        if hour != 12:
            hour += 12

    return f"{hour:02d}{rest}"

if __name__ == '__main__':
    assert timeConversion("12:01:00PM") == "12:01:00"
    assert timeConversion("12:01:00AM") == "00:01:00"
    assert timeConversion("07:05:45PM") == "19:05:45"
    print("Time Conversion tests passed successfully!")
