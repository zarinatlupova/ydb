TAG(
    ya:fat
    sb:ttl=1
    sb:logs_ttl=1
    ya:large_tests_on_ya_make_2
)

IF (ARCADIA_SANDBOX_SINGLESLOT)
    TAG(ya:large_tests_on_single_slots)
ELSE()
    TAG(ya:large_tests_on_multi_slots)
ENDIF()
