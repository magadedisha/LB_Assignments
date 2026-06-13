class Logic 
{
    void displayGrade(int marks)
    {
        
            if(marks >= 81)
            {            
                System.out.println(" A Grade");
            }
            else if(marks <= 80 && marks >= 60 )
            {            
                System.out.println(" B Grade");
            }
            else if(marks <= 60 && marks >= 40)
            {            
                System.out.println(" C Grade");
            }
             else 
            {            
                System.out.println(" D Grade");
            }
        
        
    }
}

class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}            
      