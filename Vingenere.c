#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//function that used when shit happens
void TryAgain() {
	printf("Try Again.\n");
	}

// validate vingenere key
	int main(int argc, string argv[]){
		if (argc != 2)
  	{
    	TryAgain();
	    return 1;
  	}

		string key = argv[1];
		unsigned long keyCount = size(key);
        	//checking is key contains only alphavite letters
					for(int k = 0; k < keyCount; k++)
  			{
    	if (!isalpha(key[k]))
    	{
      	TryAgain();
      	return 1;
    	}
		}
		//get string(captain?) and check it , if shit happens --> GTFO
		string text = GetString();
		if(text == NULL)
		{
  	TryAgain();
  	return 1;
	}
	// encrypt and print characters
	for (int i = 0, n = 0; i < size(text); i++)
	{
  if (isalpha(text[i]))
  	{
			//encrypt large letters
	    if (isupper(text[i]))
printf("%c",((((text[i] - 'A')+((toupper(key[n++%keyCount]))-'A')%26)%26)+'A'));
   	//encrypt small letters
    	if (islower(text[i]))
printf("%c",((((text[i] - 'a')+((tolower(key[n++%keyCount]))-'a')%26)%26)+'a'));
  	}
else
printf("%c", text[i]);
}

printf("\n");
return 0;
}
