#include <stdio.h>

int main() {
    int deviceType, symptomCode;

    // Input device type
    printf("Enter device type (1 for Laptop, 2 for Smartphone, 3 for Router): ");
    scanf("%d", &deviceType);

    
    switch(deviceType) {
        case 1: {
            // Laptop
            printf("Enter symptom code (10 for 'Won't turn on', 11 for 'Overheating', 12 for 'Slow performance'): ");
            scanf("%d", &symptomCode);
            
            
            switch(symptomCode) {
                case 10:
                    printf("Advice: Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds.\n");
                    break;
                case 11:
                    printf("Advice: Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.\n");
                    break;
                case 12:
                    printf("Advice: Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.\n");
                    break;
                default:
                    printf("Invalid symptom code for Laptop.\n");
            }
            break;
        }
        
        case 2: {
            
            printf("Enter symptom code (20 for 'Battery drains fast', 21 for 'No signal', 22 for 'Touchscreen unresponsive'): ");
            scanf("%d", &symptomCode);
            
            
            switch(symptomCode) {
                case 20:
                    printf("Advice: Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.\n");
                    break;
                case 21:
                    printf("Advice: Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.\n");
                    break;
                case 22:
                    printf("Advice: Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.\n");
                    break;
                default:
                    printf("Invalid symptom code for Smartphone.\n");
            }
            break;
        }
        
        case 3: {
            // Router
            printf("Enter symptom code (30 for 'No internet connection', 31 for 'Wi-Fi signal weak', 32 for 'Device can't connect'): ");
            scanf("%d", &symptomCode);
            
            
            switch(symptomCode) {
                case 30:
                    printf("Advice: Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.\n");
                    break;
                case 31:
                    printf("Advice: Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.\n");
                    break;
                case 32:
                    printf("Advice: Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.\n");
                    break;
                default:
                    printf("Invalid symptom code for Router.\n");
            }
            break;
        }

        default:
            printf("Invalid device type.\n");
    }

    return 0;
}

