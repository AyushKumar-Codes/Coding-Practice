// Final class to represent a configuration object (cannot be extended)
final class Configuration {
    // Final variable (constant) for the application name
    public final String APPLICATION_NAME = "My Awesome App";

    // Final method that cannot be overridden by subclasses
    public final String getVersion() {
        return "1.0.0"; // This version cannot be changed in subclasses
    }

    // Non-final variable for configuration data (can be modified)
    public String dataDirectory;

    public Configuration(String dataDirectory) {
        this.dataDirectory = dataDirectory; // Final variable can be assigned in constructor
    }

    // Method that uses final variable and non-final variable
    public void printInfo() {
        System.out.println("Application: " + APPLICATION_NAME);
        System.out.println("Version: " + getVersion());
        System.out.println("Data Directory: " + dataDirectory);
    }
}

public class Final {
    public static void main(String[] args) {
        // Create a Configuration object with a data directory
        final Configuration config = new Configuration("/data");

        // Data directory can be modified (not final)
        config.dataDirectory = "/data/updated";

        // APPLICATION_NAME and getVersion() cannot be changed (final)
        // config.APPLICATION_NAME = "New Name"; // Compile-time error

        config.printInfo();
    }
}
