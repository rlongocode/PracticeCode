public class Challenge {
    public static String sevenBoom(int[] arr) {
			  for (int i = 0; i < arr.length; i++) {
            while (arr[i] != 0) {
                if (arr[i] % 10 == 7) return "Boom!";
                arr[i] /= 10;
            }
        }
        return "there is no 7 in the array";
		}	
}