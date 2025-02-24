class ParkingSystem {

    private int bigsp;
    private int midsp;
    private int smallsp;

    int attempt  =0;

    public ParkingSystem(int big, int medium, int small) {
        this.bigsp = big;
        this.midsp = medium;
        this.smallsp = small;
        // System.out.println(bigsp + " "+ midsp + " " +smallsp);
    }
    
    public boolean addCar(int carType) {
        // System.out.println("Before: " + bigsp + " "+ midsp + " " +smallsp);
        boolean result = true;
        ++attempt;
        switch(carType) {
            case 1: {
                // System.out.println("Attempt : " + attempt);
                if(bigsp <= 0) {
                    //  System.out.println("Attempt : " + attempt + "inside");
                    // System.out.println("carType " +carType + " bigsp " + this.bigsp);
                    result = false;
                    break;
                }
                bigsp--;
                break;
            }
            case 2: {
                // System.out.println("Attempt : " + attempt);
                if(midsp <= 0) {
                    // System.out.println("Attempt : " + attempt + "inside");
                    // System.out.println("carType " +carType + " bigsp " + midsp);
                     result = false;
                    break;
                }
                midsp--;
                break;
            }
            case 3: {
                // System.out.println("Attempt : " + attempt);
                if(smallsp <= 0) {
                    // System.out.println("Attempt : " + attempt + "inside");
                    // System.out.println("carType " +carType + " bigsp " + smallsp);
                     result = false;
                    break;
                }
                smallsp--;
                break;
            }
            default: break;
        }
        //  System.out.println("After: " + bigsp + " "+ midsp + " " +smallsp);
        return result;
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */
