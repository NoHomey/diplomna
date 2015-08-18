#ifndef _Direction_HH

#define _Direction_HH

class Direction {

public:

	enum DirectionName {Negative = -1, Null, Positive};
	
	Direction (void) noexcept = default;
    Direction (const DirectionName& directionName) noexcept;
    auto setDirectionName (const DirectionName& directionName) noexcept -> void;
    auto getDirectionName (void) const noexcept -> DirectionName;
    auto invert (void) noexcept -> void;
    auto convertNameToInt (const DirectionName& directionName) const noexcept -> int;
    auto convertIntToName (const int& val) const noexcept -> DirectionName;

protected:

    DirectionName directionName_ {Null};

};

#endif