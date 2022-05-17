#ifndef custom_import_ezsigntemplatepackage_relation_request_TEST
#define custom_import_ezsigntemplatepackage_relation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_import_ezsigntemplatepackage_relation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_import_ezsigntemplatepackage_relation_request.h"
custom_import_ezsigntemplatepackage_relation_request_t* instantiate_custom_import_ezsigntemplatepackage_relation_request(int include_optional);



custom_import_ezsigntemplatepackage_relation_request_t* instantiate_custom_import_ezsigntemplatepackage_relation_request(int include_optional) {
  custom_import_ezsigntemplatepackage_relation_request_t* custom_import_ezsigntemplatepackage_relation_request = NULL;
  if (include_optional) {
    custom_import_ezsigntemplatepackage_relation_request = custom_import_ezsigntemplatepackage_relation_request_create(
      174,
      20,
      "Customer"
    );
  } else {
    custom_import_ezsigntemplatepackage_relation_request = custom_import_ezsigntemplatepackage_relation_request_create(
      174,
      20,
      "Customer"
    );
  }

  return custom_import_ezsigntemplatepackage_relation_request;
}


#ifdef custom_import_ezsigntemplatepackage_relation_request_MAIN

void test_custom_import_ezsigntemplatepackage_relation_request(int include_optional) {
    custom_import_ezsigntemplatepackage_relation_request_t* custom_import_ezsigntemplatepackage_relation_request_1 = instantiate_custom_import_ezsigntemplatepackage_relation_request(include_optional);

	cJSON* jsoncustom_import_ezsigntemplatepackage_relation_request_1 = custom_import_ezsigntemplatepackage_relation_request_convertToJSON(custom_import_ezsigntemplatepackage_relation_request_1);
	printf("custom_import_ezsigntemplatepackage_relation_request :\n%s\n", cJSON_Print(jsoncustom_import_ezsigntemplatepackage_relation_request_1));
	custom_import_ezsigntemplatepackage_relation_request_t* custom_import_ezsigntemplatepackage_relation_request_2 = custom_import_ezsigntemplatepackage_relation_request_parseFromJSON(jsoncustom_import_ezsigntemplatepackage_relation_request_1);
	cJSON* jsoncustom_import_ezsigntemplatepackage_relation_request_2 = custom_import_ezsigntemplatepackage_relation_request_convertToJSON(custom_import_ezsigntemplatepackage_relation_request_2);
	printf("repeating custom_import_ezsigntemplatepackage_relation_request:\n%s\n", cJSON_Print(jsoncustom_import_ezsigntemplatepackage_relation_request_2));
}

int main() {
  test_custom_import_ezsigntemplatepackage_relation_request(1);
  test_custom_import_ezsigntemplatepackage_relation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_import_ezsigntemplatepackage_relation_request_MAIN
#endif // custom_import_ezsigntemplatepackage_relation_request_TEST
