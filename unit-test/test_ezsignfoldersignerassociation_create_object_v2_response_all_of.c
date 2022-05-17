#ifndef ezsignfoldersignerassociation_create_object_v2_response_all_of_TEST
#define ezsignfoldersignerassociation_create_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_create_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_create_object_v2_response_all_of.h"
ezsignfoldersignerassociation_create_object_v2_response_all_of_t* instantiate_ezsignfoldersignerassociation_create_object_v2_response_all_of(int include_optional);

#include "test_ezsignfoldersignerassociation_create_object_v2_response_m_payload.c"


ezsignfoldersignerassociation_create_object_v2_response_all_of_t* instantiate_ezsignfoldersignerassociation_create_object_v2_response_all_of(int include_optional) {
  ezsignfoldersignerassociation_create_object_v2_response_all_of_t* ezsignfoldersignerassociation_create_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_create_object_v2_response_all_of = ezsignfoldersignerassociation_create_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_create_object_v2_response_m_payload(0)
    );
  } else {
    ezsignfoldersignerassociation_create_object_v2_response_all_of = ezsignfoldersignerassociation_create_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignfoldersignerassociation_create_object_v2_response_all_of;
}


#ifdef ezsignfoldersignerassociation_create_object_v2_response_all_of_MAIN

void test_ezsignfoldersignerassociation_create_object_v2_response_all_of(int include_optional) {
    ezsignfoldersignerassociation_create_object_v2_response_all_of_t* ezsignfoldersignerassociation_create_object_v2_response_all_of_1 = instantiate_ezsignfoldersignerassociation_create_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignfoldersignerassociation_create_object_v2_response_all_of_1 = ezsignfoldersignerassociation_create_object_v2_response_all_of_convertToJSON(ezsignfoldersignerassociation_create_object_v2_response_all_of_1);
	printf("ezsignfoldersignerassociation_create_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_create_object_v2_response_all_of_1));
	ezsignfoldersignerassociation_create_object_v2_response_all_of_t* ezsignfoldersignerassociation_create_object_v2_response_all_of_2 = ezsignfoldersignerassociation_create_object_v2_response_all_of_parseFromJSON(jsonezsignfoldersignerassociation_create_object_v2_response_all_of_1);
	cJSON* jsonezsignfoldersignerassociation_create_object_v2_response_all_of_2 = ezsignfoldersignerassociation_create_object_v2_response_all_of_convertToJSON(ezsignfoldersignerassociation_create_object_v2_response_all_of_2);
	printf("repeating ezsignfoldersignerassociation_create_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_create_object_v2_response_all_of_2));
}

int main() {
  test_ezsignfoldersignerassociation_create_object_v2_response_all_of(1);
  test_ezsignfoldersignerassociation_create_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_create_object_v2_response_all_of_MAIN
#endif // ezsignfoldersignerassociation_create_object_v2_response_all_of_TEST
