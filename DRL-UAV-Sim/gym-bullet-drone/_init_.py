from gym.envs.registration import register


register(
    id='move-aviary-v0',
    entry_point='gym-bullet-drone.envs.single-agent-rl:moving',
)

register(
    id='hover-aviary-v0',
    entry_point='gym-bullet-drone.envs.single-agent-rl:hovering',
)