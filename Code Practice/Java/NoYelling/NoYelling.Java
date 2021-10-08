/*******************************************************************************************************************

	Create a function that transforms sentences ending with multiple question marks 
	? or exclamation marks ! into a sentence only ending with one without changing 
	punctuation in the middle of the sentences.

*******************************************************************************************************************/





public class edabitchallenge {
	public static String noYelling(String phrase) {
		while (phrase.endsWith("!!") ||
				phrase.endsWith("??")) {
				phrase = phrase.substring(0, phrase.length()-1);
				phrase = noYelling(phrase);
		}
		return phrase;		
	}
}