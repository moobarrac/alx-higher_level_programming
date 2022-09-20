#!/bin/bash
# Takes in a URL, sends a POST request to the passed URL, and displays the body of the response. A variable email must be sent with the value hr@holbertonschool.com. A variable subject must be sent with the value I will always be here for PLD    
curl -sd "email=hr@holbertonschool.com&subject=I will always be here for PLD" POST "$1"
