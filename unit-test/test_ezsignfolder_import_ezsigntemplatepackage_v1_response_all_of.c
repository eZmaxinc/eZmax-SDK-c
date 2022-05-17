#ifndef ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_TEST
#define ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of.h"
ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_t* instantiate_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(int include_optional);

#include "test_ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload.c"


ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_t* instantiate_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(int include_optional) {
  ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_t* ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of = ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_import_ezsigntemplatepackage_v1_response_m_payload(0)
    );
  } else {
    ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of = ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of;
}


#ifdef ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_MAIN

void test_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(int include_optional) {
    ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_t* ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_1 = instantiate_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(include_optional);

	cJSON* jsonezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_1 = ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_1);
	printf("ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_1));
	ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_t* ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_2 = ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_parseFromJSON(jsonezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_1);
	cJSON* jsonezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_2 = ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_2);
	printf("repeating ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_2));
}

int main() {
  test_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(1);
  test_ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_MAIN
#endif // ezsignfolder_import_ezsigntemplatepackage_v1_response_all_of_TEST
