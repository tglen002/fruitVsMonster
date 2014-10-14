compile: TextAdventure.cpp
	@g++ TextAdventure.cpp -Wall -Werror -ansi -pedantic -o TextAd
run: TextAd
	@./TextAd
clean: TextAd
	@rm TextAd
