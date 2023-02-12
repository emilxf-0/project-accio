using System;
using UnityEngine;

namespace DefaultNamespace
{
    public class StateMachine : MonoBehaviour
    {
        private State state = State.Grounded;

        private void Update()
        {
            switch (state)
            {
                case State.Grounded:
                    GroundedUpdate();
                    break;
                case State.Jumping:
                    JumpingUpdate();
                    break;
                case State.DoubleJumping:
                    DoubleJumpingUpdate();
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        private void GroundedUpdate()
        {
            throw new NotImplementedException();
        }

        private void JumpingUpdate()
        {
            throw new NotImplementedException();
        }

        private void DoubleJumpingUpdate()
        {
            throw new NotImplementedException();
        }

        private enum State
        {
            Grounded,
            Jumping,
            DoubleJumping,
        }
    }
}