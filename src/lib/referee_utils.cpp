/**
 * @file referee_utils.cpp
 *
 * @author Comp ThundeRatz <comp@thunderatz.org>
 *
 * @brief Referee utilitary functions globally available.
 *
 * @date 08/2021
 */

#include "vsss_msgs/referee_utils.h"

/*****************************************
 * Public Functions Prototypes
 *****************************************/
namespace vsss_msgs {
std::string to_string(const vsss_msgs::GameState& game_state) {
    switch (game_state.data) {
        case vsss_msgs::GameState::FREE_KICK: {
            return "FREE_KICK";
        }

        case vsss_msgs::GameState::PENALTY_KICK: {
            return "PENALTY_KICK";
        }

        case vsss_msgs::GameState::GOAL_KICK: {
            return "GOAL_KICK";
        }

        case vsss_msgs::GameState::FREE_BALL: {
            return "FREE_BALL";
        }

        case vsss_msgs::GameState::KICKOFF: {
            return "KICKOFF";
        }

        case vsss_msgs::GameState::STOP: {
            return "STOP";
        }

        case vsss_msgs::GameState::GAME_ON: {
            return "GAME_ON";
        }

        case vsss_msgs::GameState::HALT: {
            return "HALT";
        }

        default: {
            return "UNIDENTIFIED_VALUE";
        }
    }
}

std::string to_string(const vsss_msgs::TeamSide& team_side) {
    switch (team_side.data) {
        case vsss_msgs::TeamSide::FRIENDS: {
            return "FRIENDS";
        }

        case vsss_msgs::TeamSide::FOES: {
            return "FOES";
        }

        case vsss_msgs::TeamSide::NONE: {
            return "NONE";
        }

        default: {
            return "UNIDENTIFIED_VALUE";
        }
    }
}

std::string to_string(const vsss_msgs::Quadrant& quadrant) {
    switch (quadrant.data) {
        case vsss_msgs::Quadrant::NO_QUADRANT: {
            return "NO_QUADRANT";
        }

        case vsss_msgs::Quadrant::QUADRANT_1: {
            return "QUADRANT_1";
        }

        case vsss_msgs::Quadrant::QUADRANT_2: {
            return "QUADRANT_2";
        }

        case vsss_msgs::Quadrant::QUADRANT_3: {
            return "QUADRANT_3";
        }

        case vsss_msgs::Quadrant::QUADRANT_4: {
            return "QUADRANT_4";
        }

        default: {
            return "UNIDENTIFIED_VALUE";
        }
    }
}

std::string to_string(const vsss_msgs::GamePeriod& game_period) {
    switch (game_period.data) {
        case vsss_msgs::GamePeriod::NO_HALF: {
            return "NO_HALF";
        }

        case vsss_msgs::GamePeriod::FIRST_HALF: {
            return "FIRST_HALF";
        }

        case vsss_msgs::GamePeriod::SECOND_HALF: {
            return "SECOND_HALF";
        }

        case vsss_msgs::GamePeriod::OVERTIME_FIRST_HALF: {
            return "OVERTIME_FIRST_HALF";
        }

        case vsss_msgs::GamePeriod::OVERTIME_SECOND_HALF: {
            return "OVERTIME_SECOND_HALF";
        }

        case vsss_msgs::GamePeriod::PENALTY_SHOOTOUTS: {
            return "PENALTY_SHOOTOUTS";
        }

        default: {
            return "UNIDENTIFIED_VALUE";
        }
    }
}

std::string to_string(const vsss_msgs::Referee& referee) {
    std::string str{"Game state: "};
    str += to_string(referee.game_state);
    str += "\nTeam side: ";
    str += to_string(referee.team_side);
    str += "\nQuadrant: ";
    str += to_string(referee.quadrant);
    str += "\nGame period: ";
    str += to_string(referee.game_period);
    return str;
}
}  // namespace vsss_msgs

