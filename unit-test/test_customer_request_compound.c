#ifndef customer_request_compound_TEST
#define customer_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_request_compound.h"
customer_request_compound_t* instantiate_customer_request_compound(int include_optional);



customer_request_compound_t* instantiate_customer_request_compound(int include_optional) {
  customer_request_compound_t* customer_request_compound = NULL;
  if (include_optional) {
    customer_request_compound = customer_request_compound_create(
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
      ezmax_api_definition__full_customer_request_compound__"Normal",
      ezmax_api_definition__full_customer_request_compound__"No",
      true,
      true,
      "This is a comment",
      "a"
    );
  } else {
    customer_request_compound = customer_request_compound_create(
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
      ezmax_api_definition__full_customer_request_compound__"Normal",
      ezmax_api_definition__full_customer_request_compound__"No",
      true,
      true,
      "This is a comment",
      "a"
    );
  }

  return customer_request_compound;
}


#ifdef customer_request_compound_MAIN

void test_customer_request_compound(int include_optional) {
    customer_request_compound_t* customer_request_compound_1 = instantiate_customer_request_compound(include_optional);

	cJSON* jsoncustomer_request_compound_1 = customer_request_compound_convertToJSON(customer_request_compound_1);
	printf("customer_request_compound :\n%s\n", cJSON_Print(jsoncustomer_request_compound_1));
	customer_request_compound_t* customer_request_compound_2 = customer_request_compound_parseFromJSON(jsoncustomer_request_compound_1);
	cJSON* jsoncustomer_request_compound_2 = customer_request_compound_convertToJSON(customer_request_compound_2);
	printf("repeating customer_request_compound:\n%s\n", cJSON_Print(jsoncustomer_request_compound_2));
}

int main() {
  test_customer_request_compound(1);
  test_customer_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_request_compound_MAIN
#endif // customer_request_compound_TEST
