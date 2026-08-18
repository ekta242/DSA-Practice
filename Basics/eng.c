void translate(char *sentence)
{
    char result[MAX] = "";
    char *word;

    word = strtok(sentence, " ");

    while (word != NULL)
    {
        if (strcmp(word, "tbh") == 0)
            strcat(result, "to be honest ");
        else if (strcmp(word, "ig") == 0)
            strcat(result, "I guess ");
        else if (strcmp(word, "tbf") == 0)
            strcat(result, "to be fair ");
        else if (strcmp(word, "atm") == 0)
            strcat(result, "at the moment ");
        else if (strcmp(word, "irl") == 0)
            strcat(result, "in real life ");
        else if (strcmp(word, "lol") == 0)
            strcat(result, "laughing out loud ");
        else if (strcmp(word, "asap") == 0)
            strcat(result, "as soon as possible ");
        else if (strcmp(word, "omg") == 0)
            strcat(result, "oh my god ");
        else if (strcmp(word, "ttyl") == 0)
            strcat(result, "talk to you later ");
        else if (strcmp(word, "idk") == 0)
            strcat(result, "I don't know ");
        else if (strcmp(word, "idc") == 0)
            strcat(result, "I don't care ");
        else if (strcmp(word, "nvm") == 0)
            strcat(result, "never mind ");
        else
        {
            strcat(result, word);
            strcat(result, " ");
        }

        word = strtok(NULL, " ");
    }

    strcpy(sentence, result);
}
