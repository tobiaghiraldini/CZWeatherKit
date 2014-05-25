//
// CZWeatherService_Internal.h
// Copyright (c) 2014, Comyar Zaheri
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#pragma mark - Imports

#import "Climacon.h"
#import "CZWeatherCondition.h"


#pragma mark - CZWeatherCondition Friend Category

/**
 Friend category for CZWeatherCondition. Allows write access to a CZWeatherCondition object's properties.
 
 Should not be used outside of a weather service.
 */
@interface CZWeatherCondition (Friend)

- (void)setDate:(NSDate *)date;
- (void)setDescription:(NSString *)description;
- (void)setClimaconCharacter:(Climacon)climaconCharacter;
- (void)setTemperature:(CZTemperature)temperature;
- (void)setHighTemperature:(CZTemperature)highTemperature;
- (void)setLowTemperature:(CZTemperature)lowTemperature;
- (void)setWindDegrees:(CGFloat)windDegrees;
- (void)setWindSpeed:(CZWindSpeed)windSpeed;
- (void)setHumidity:(CGFloat)humidity;

@end