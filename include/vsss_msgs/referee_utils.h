/**
 * @file referee_utils.h
 *
 * @author Comp ThundeRatz <comp@thunderatz.org>
 *
 * @brief Referee utilitary functions globally available.
 *
 * @date 08/2021
 */

#ifndef __REFEREE_UTILS_H__
#define __REFEREE_UTILS_H__

#include <string>

#include "vsss_msgs/Referee.h"
#include "vsss_msgs/RefereeStamped.h"

/*****************************************
 * Public Functions Prototypes
 *****************************************/

namespace vsss_msgs {
/**
 * @brief Convert a vsss_msgs::GameState to a string.
 *
 * @param game_state The game state to convert.
 *
 * @return std::string
 */
std::string to_string(const vsss_msgs::GameState& game_state);

/**
 * @brief Convert a vsss_msgs::TeamSide to a string.
 *
 * @param team_side The team side to convert.
 *
 * @return std::string
 */
std::string to_string(const vsss_msgs::TeamSide& team_side);

/**
 * @brief Convert a vsss_msgs::Quadrant to a string.
 *
 * @param quadrant The quadrant to convert.
 *
 * @return std::string
 */
std::string to_string(const vsss_msgs::Quadrant& quadrant);

/**
 * @brief Convert a vsss_msgs::GamePeriod to a string.
 *
 * @param game_period The game period to convert.
 *
 * @return std::string
 */
std::string to_string(const vsss_msgs::GamePeriod& game_period);

/**
 * @brief Convert a vsss_msgs::Referee to a string.
 *
 * @param referee The referee msg to convert.
 *
 * @return std::string
 */
std::string to_string(const vsss_msgs::Referee& referee);
}  // namespace vsss_msgs

#endif // __REFEREE_UTILS_H__
