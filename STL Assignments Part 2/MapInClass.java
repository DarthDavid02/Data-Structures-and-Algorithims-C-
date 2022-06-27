import java.util.*;
public class MapInClass 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        Map<String, ArrayList<String>> months = new HashMap<String, ArrayList<String>>();
        /*Janurary*/
        months.put("Janurary", new ArrayList<String>());
        months.get("Janurary").add("Days: 31");
        months.get("Janurary").add("Holidays in Janurary: New Year's Day, National Bird Day, Martin Luther King's BirthDay");
        months.get("Janurary").add("Janurary Birthstone: Garnet");
        /*Feburary*/
        months.put("February", new ArrayList<String>());
        months.get("February").add("Days: 28 Normally, 29 on a Leap Year");
        months.get("February").add("Holidays in Feburary: Groundhog's Day, Super Bowl Sunday, Valentines Day");
        months.get("February").add("Feburary Birthstone: Amethyst");
        /*March*/
        months.put("March", new ArrayList<String>());
        months.get("March").add("Days: 31");
        months.get("March").add("Holidays in March: Mardi Gras, St. Patrick's Day, International Earth Day");
        months.get("March").add("March Birthstone: Aquamarine");
        /*April*/
        months.put("April", new ArrayList<String>());
        months.get("April").add("Days: 30");
        months.get("April").add("Holidays in April: Good Friday, Easter Sunday, Patriot's Day");
        months.get("April").add("April Birthstone: White Topaz");
        /*May*/
        months.put("May", new ArrayList<String>());
        months.get("May").add("Days: 31");
        months.get("May").add("Holidays in May: National Teacher's Day, Star Wars Day, Mother's Day, Memorial Day");
        months.get("May").add("May Birthstone: Green Onyx");
        /*June*/
        months.put("June", new ArrayList<String>());
        months.get("June").add("Days: 30");
        months.get("June").add("Holidays in June: Flag Day, Father's Day, Juneteenth Day");
        months.get("June").add("June Birthstone: Moonstone");
        /*July*/
        months.put("July", new ArrayList<String>());
        months.get("July").add("Days: 31");
        months.get("July").add("Holidays in July: 4th of July (Independence Day), National Hot Dog Day, Hammock Day");
        months.get("July").add("July Birthstone: Ruby");
        /*August*/
        months.put("August", new ArrayList<String>());
        months.get("August").add("Days: 31");
        months.get("August").add("Holidays in August: National Watermelon Day, National S'mores Day, National Marshmallow Toasting Day");
        months.get("August").add("August Birthstone: Peridot");
        /*September*/
        months.put("September", new ArrayList<String>());
        months.get("September").add("Days: 30");
        months.get("September").add("Holidays in September: Labor Day, 911 Remembrance, Grandparents Day");
        months.get("September").add("September Birthstone: Blue Sapphire");
        /*October*/
        months.put("October", new ArrayList<String>());
        months.get("October").add("Days: 31");
        months.get("October").add("Holidays in October: Columbus Day, Make a Difference Day, Halloween");
        months.get("October").add("October Birthstone: Opal");
        /*November*/
        months.put("November", new ArrayList<String>());
        months.get("November").add("Days: 30");
        months.get("November").add("Holidays in November: Veteran's Day, Thanksgiving Day, Black Friday");
        months.get("November").add("November Birthstone: Citrine");
        /*December*/
        months.put("December", new ArrayList<String>());
        months.get("December").add("Days: 31");
        months.get("December").add("Holidays in December: Christmas, Kwanzaa, New Year's Eve");
        months.get("December").add("December Birthstone: Blue Topaz");

        System.out.println("Enter a month and type the month name fully\n");
        String answer = input.nextLine();
        System.out.println(months.get(answer));
    }
}
