#ifndef customer_response_compound_TEST
#define customer_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_response_compound.h"
customer_response_compound_t* instantiate_customer_response_compound(int include_optional);



customer_response_compound_t* instantiate_customer_response_compound(int include_optional) {
  customer_response_compound_t* customer_response_compound = NULL;
  if (include_optional) {
    customer_response_compound = customer_response_compound_create(
      18,
      1,
      229,
      "eZmax Solutions",
      55,
      150,
      164,
      66,
      2,
      21,
      166,
      36,
      36,
      223,
      1,
      170,
      1,
      26,
      18,
      66,
      1,
      26,
      18,
      66,
      242,
      107,
      70,
      "EZMA1",
      "EZMA1",
      "4.00",
      7085237,
      12316524,
      172,
      193,
      "4.00",
      "2020-12-31",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      true,
      true,
      true,
      true,
      true,
      true,
      ezmax_api_definition__full_customer_response_compound__"Normal",
      ezmax_api_definition__full_customer_response_compound__"No",
      true,
      true,
      "This is a comment",
      "a"
    );
  } else {
    customer_response_compound = customer_response_compound_create(
      18,
      1,
      229,
      "eZmax Solutions",
      55,
      150,
      164,
      66,
      2,
      21,
      166,
      36,
      36,
      223,
      1,
      170,
      1,
      26,
      18,
      66,
      1,
      26,
      18,
      66,
      242,
      107,
      70,
      "EZMA1",
      "EZMA1",
      "4.00",
      7085237,
      12316524,
      172,
      193,
      "4.00",
      "2020-12-31",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      true,
      true,
      true,
      true,
      true,
      true,
      ezmax_api_definition__full_customer_response_compound__"Normal",
      ezmax_api_definition__full_customer_response_compound__"No",
      true,
      true,
      "This is a comment",
      "a"
    );
  }

  return customer_response_compound;
}


#ifdef customer_response_compound_MAIN

void test_customer_response_compound(int include_optional) {
    customer_response_compound_t* customer_response_compound_1 = instantiate_customer_response_compound(include_optional);

	cJSON* jsoncustomer_response_compound_1 = customer_response_compound_convertToJSON(customer_response_compound_1);
	printf("customer_response_compound :\n%s\n", cJSON_Print(jsoncustomer_response_compound_1));
	customer_response_compound_t* customer_response_compound_2 = customer_response_compound_parseFromJSON(jsoncustomer_response_compound_1);
	cJSON* jsoncustomer_response_compound_2 = customer_response_compound_convertToJSON(customer_response_compound_2);
	printf("repeating customer_response_compound:\n%s\n", cJSON_Print(jsoncustomer_response_compound_2));
}

int main() {
  test_customer_response_compound(1);
  test_customer_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_response_compound_MAIN
#endif // customer_response_compound_TEST
