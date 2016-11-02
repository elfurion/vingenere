#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
 //we propose user to try again in case of any kind of problem
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
        	//checking that key contains only alphavite letters
					for(int k = 0; k < keyCount; k++)
  			{
    	if (!isalpha(key[k]))
    	{
      	TryAgain();
      	return 1;
    	}
		}
		//get string and check it , in case of problems we propose to try again
		string text = GetString();
		if(text == NULL)
		{
  	TryAgain();
  	return 1;
	}
	// encrypt and print characters.Using 'i' as just temporary variable to encrypt and use cycle.
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
