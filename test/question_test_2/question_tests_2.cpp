#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify transcribe dna into rna")
{
	REQUIRE(transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU");
}