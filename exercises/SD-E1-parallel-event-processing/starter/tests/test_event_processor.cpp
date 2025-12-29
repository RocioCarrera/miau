#include <catch2/catch_test_macros.hpp>

#include "EventProcessor.hpp"

TEST_CASE("EventProcessor sums tracks and energy") {
    csc2026::EventProcessor processor;

    auto events = csc2026::EventProcessor::generateSampleEvents(10);

    processor.processEvents(events);

    // In the starter code, this can be wrong under OpenMP due to races.
    REQUIRE(processor.totalTracks() > 0);
    REQUIRE(processor.totalEnergy() > 0.0);
}

