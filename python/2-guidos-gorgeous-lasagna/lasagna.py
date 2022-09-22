#!/usr/bin/env python3

"""Lasagna solution"""

EXPECTED_BAKE_TIME = 40
PREPARATION_TIME = 2

def bake_time_remaining(elapsed_bake_time):
    """
    Return the remaining bake time.
    """
    return EXPECTED_BAKE_TIME - elapsed_bake_time


def preparation_time_in_minutes(number_of_layers):
    """
    Return the preparation time.
    """
    return number_of_layers * PREPARATION_TIME


def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """
    Return the total elapsed time.
    """
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time
