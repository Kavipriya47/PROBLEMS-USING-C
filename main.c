#include<stdio.h>
#include<string.h>
struct Product
{
    char name[20];
    int quantity;
    int price;
};
void sellProducts(struct Product* products) {
    int brand, quantity;
    printf("\nBRANDS:\n\n1.MAX\n2.ZARA\n3.H&M\n4.NONE");
    printf("\nEnter the brand you'd like to sell: ");
    scanf("%d", &brand);
    brand--; 
    if (brand >= 0 && brand <= 2)
    {
        printf("\nEnter the quantity you want to sell: ");
        scanf("%d", &quantity);
        products[brand].quantity += quantity;
        int bill = quantity * products[brand].price;
        printf("\nYou have received: %d", bill);
        printf("\nTHANKS FOR YOUR SERVICE");
    }
    else 
    {
        printf("Invalid brand choice!");
    }
}
void buyProducts(struct Product* products) 
{
    int brand, quantity;
    printf("\nBRANDS:\n\n1.MAX\n2.ZARA\n3.H&M\n4.NONE");
    printf("\nEnter the brand you'd like to buy: ");
    scanf("%d", &brand);
    brand--; 
    if (brand >= 0 && brand <= 2) 
    {
        printf("\nEnter the quantity you want to buy: ");
        scanf("%d", &quantity);
        if (products[brand].quantity >= quantity)
        {
            products[brand].quantity -= quantity;
            int bill = quantity * products[brand].price;
            printf("\nYou have to pay: %d", bill);
            printf("\nTHANKS FOR YOUR SHOPPING");
        }
        else
        {
            printf("\nInsufficient quantity available.");
        }
    }
    else 
    {
        printf("Invalid brand choice!");
    }
}
int main() {
    struct Product products[3] = {
        {"MAX", 5, 500},
        {"ZARA", 5, 1100},
        {"H&M", 5, 900}
    };
    printf("\nkavipriya\n7376232CB126\n\n");
    char username[100], password[8], conpassword[8], usernamelogin[100], passwordlogin[8];
    int opt, age;
    printf("                  WELCOME TO E-COMMERCE PLATFORM                \n\n");
    printf("1.SIGNUP\n2. LOGIN \n3. EXIT\n");
    printf("ENTER YOUR OPTION:");
    scanf("%d", &opt);
    switch(opt) {
        case 1:
            printf("ENTER YOUR USERNAME:");
            scanf("%s", username);
            printf("ENTER YOUR PASSWORD:");
            scanf("%s", password);
            printf("CONFIRM YOUR PASSWORD:");
            scanf("%s", conpassword);
            printf("ENTER YOUR AGE:");
            scanf("%d", &age);
            if (strcmp(password, conpassword) == 0 && age >= 18)
            {
                printf("\nYour account is created successfully.");
                printf("\n\nYou have successfully logged in.");
                int option;
                printf("\n1.BUY PRODUCTS\n2.SELL PRODUCTS\n3.Exit");
                printf("\nEnter your choice:");
                scanf("%d", &option);
                switch(option)
                {
                    case 1:
                        buyProducts(products);
                        break;
                    case 2:
                        sellProducts(products);
                        break;
                    case 3:
                        break;
                }
            } 
            else
            {
                printf("\nEnter valid details to create account.");
            }
            break;

        case 2:
            char username[100] = "kavipriya";
            char password[8] = "kavi47";
            printf("ENTER YOUR USERNAME:");
            scanf("%s", usernamelogin);
            printf("ENTER YOUR PASSWORD:");
            scanf("%s", passwordlogin);

            if (strcmp(password, passwordlogin) == 0 && strcmp(username, usernamelogin) == 0 && age >= 18) {
                printf("\nYou have successfully logged in.");
                int option;
                printf("\n1.BUY PRODUCTS\n2.SELL PRODUCTS\n3.Exit");
                printf("\nEnter your choice:");
                scanf("%d", &option);
                switch(option) {
                    case 1:
                        buyProducts(products);
                        break;
                    case 2:
                        sellProducts(products);
                        break;
                    case 3:
                        break;
                }
            } 
            else {
                printf("\nSignup first to login.");
            }
            break;

        case 3:
            printf("\nYou have logged out.");
            break;
    }
    return 0;
}

